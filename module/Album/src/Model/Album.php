<?php

namespace Album\Model;

use Laminas\Filter\StringTrim;
use Laminas\Filter\StripTags;
use Laminas\Filter\ToInt;
use Laminas\InputFilter\InputFilter;
use Laminas\InputFilter\InputFilterAwareInterface;
use Laminas\InputFilter\InputFilterInterface;
use Laminas\Validator\StringLength;

class Album implements InputFilterAwareInterface
{
    public $id;
    public $artist;
    public $title;

    private $inputFilter;

    public function exchangeArray($data): void
    {
        $this->id = !empty($data['id']) ? $data['id'] : null;
        $this->artist = !empty($data['artist']) ? $data['artist'] : null;
        $this->title = !empty($data['title']) ? $data['title'] : null;
    }

    public function getArrayCopy(): array
    {
        return [
            'id'     => $this->id,
            'artist' => $this->artist,
            'title'  => $this->title,
        ];
    }

    public function setInputFilter(InputFilterInterface $inputFilter): InputFilterAwareInterface
    {
        throw new \DomainException(sprintf(
            '%s does not allow injection of an alternate input filter', __CLASS__
        ));
    }

    public function getInputFilter(): InputFilter|InputFilterInterface
    {
        if ($this->inputFilter) {
            return $this->inputFilter;
        }

        $inputFilter = new InputFilter();

        $inputFilter->add([
            'name' => 'id',
            'required' => true,
            'filters' => [
                ['name' => ToInt::class],
            ],
        ]);
        $inputFilter->add([
            'name' => 'artist',
            'required' => true,
            'filters' => [
                ['name' => StripTags::class],
                ['name' => StringTrim::class],
            ],
            'validators' => [
                [
                    'name' => StringLength::class,
                    'options' => [
                        'encoding' => 'UTF-8',
                        'min' => 1,
                        'max' => 100,
                    ],
                ],
            ],
        ]);
        $inputFilter->add(['name' => 'title',
            'required' => true,
            'filters' => [
                ['name' => StripTags::class],
                ['name' => StringTrim::class],
            ],
            'validators' => [
                [
                    'name' => StringLength::class,
                    'options' => [
                        'encoding' => 'UTF-8',
                        'min' => 1,
                        'max' => 100,
                    ],
                ],
            ],]);
        $this->inputFilter = $inputFilter;
        return $this->inputFilter;
    }


}