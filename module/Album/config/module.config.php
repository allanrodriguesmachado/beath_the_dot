<?php

declare(strict_types=1);

namespace Album;

use Album\Controller\AlbumController;
use Laminas\Router\Http\Literal;
use Laminas\Router\Http\Segment;

return [
    'router' => [
        'routes' => [
            'list' => [
                'type'    => Literal::class,
                'options' => [
                    'route'    => '/',
                    'defaults' => [
                        'controller' => AlbumController::class,
                        'action'     => 'index',
                    ],
                ],
            ],
            'album' => [
                'type' => Segment::class,
                'options' => [
                    'route' => '/album[/:action[/:id]]',
                    'defaults' => [
                        'controller' => Controller\AlbumController::class,
                        'action' => 'index',
                    ],
                ],
            ],
        ],
    ],

    'view_manager' => [
        'template_path_stack' => [
            'album' => __DIR__ . '/../view',
        ],
        'template_map' => [
            'layout/layout' => __DIR__ . '/../view/layout/layout.phtml',
            'error/404' => __DIR__ . '/../view/error/404.phtml',
            'error/index'
        ],
        'strategies' => [
            'ViewJsonStrategy',
        ],
    ],
];