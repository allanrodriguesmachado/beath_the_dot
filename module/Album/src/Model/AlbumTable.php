<?php

namespace Album\Model;

use Laminas\Db\ResultSet\ResultSetInterface;
use Laminas\Db\TableGateway\TableGatewayInterface;
use RuntimeException;

class AlbumTable
{
    private TableGatewayInterface $tableGateway;

    public function __construct(TableGatewayInterface $tableGateway)
    {
        $this->tableGateway = $tableGateway;
    }

    public function fetchAll():ResultSetInterface
    {
        return $this->tableGateway->select();
    }

    public function getAlbum($id)
    {
        $id = (int) $id;
        $rowSet = $this->tableGateway->select(['id' => $id]);
        $row = $rowSet->current();
        if (! $row) {
            throw new RuntimeException(sprintf(
                'Could not find row with identifier %d', $id
            ));
        }

        return $row;
    }

    public function saveAlbum(Album $album): void
    {
        $data = [
            'artist' => $album->artist,
            'title'  => $album->title,
        ];

        if ((int) $album->id === 0) {
            $this->tableGateway->insert($data);
            return;
        }

        try {
            $this->getAlbum((int) $album->id);
        } catch (RuntimeException $e) {
            throw new RuntimeException(sprintf(
                'Cannot update album with identifier %d; does not exist',
                (int) $album->id
            ));
        }

        $this->tableGateway->update($data, ['id' => (int) $album->id]);
    }

    public function deleteAlbum(int $id): void
    {
        $this->tableGateway->delete(['id' => $id]);
    }
}