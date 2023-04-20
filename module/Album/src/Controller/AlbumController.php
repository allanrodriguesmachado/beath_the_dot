<?php

declare(strict_types=1);

namespace Album\Controller;

use Album\Model\AlbumTable;
use Laminas\Mvc\Controller\AbstractActionController;
use Laminas\View\Model\ViewModel;

class AlbumController extends AbstractActionController
{
    private AlbumTable $table;

    public function __construct(AlbumTable $table)
    {
        $this->table = $table;
    }
    public function indexAction(): ViewModel
    {
        return new ViewModel([
            'albums' => $this->table->fetchAll()
        ]);
    }
}