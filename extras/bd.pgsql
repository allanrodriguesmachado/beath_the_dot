-- Transformação para PostgreSQL
CREATE SCHEMA IF NOT EXISTS INNOUT;

DROP TABLE IF EXISTS INNOUT.working_hours, INNOUT.users;
CREATE TABLE INNOUT.users (
    id SERIAL PRIMARY KEY,
    name VARCHAR(100) NOT NULL,
    password VARCHAR(100) NOT NULL,
    email VARCHAR(50) UNIQUE NOT NULL,
    start_date DATE NOT NULL,
    end_date DATE,
    is_admin BOOLEAN NOT NULL DEFAULT false
);
CREATE TABLE INNOUT.working_hours (
    id SERIAL PRIMARY KEY,
    user_id INT,
    work_date DATE NOT NULL,
    time1 TIME,
    time2 TIME,
    time3 TIME,
    time4 TIME,
    worked_time INT,

    FOREIGN KEY (user_id) REFERENCES INNOUT.users(id),
    CONSTRAINT cons_user_day UNIQUE (user_id, work_date)
);

-- Senha criptografada correspondente ao valor "a"
INSERT INTO INNOUT.users (name, password, email, start_date, end_date, is_admin)
VALUES ('Admin', '$2y$10$/vC1UKrEJQUZLN2iM3U9re/4DQP74sXCOVXlYXe/j9zuv1/MHD4o.', 'admin@cod3r.com.br', '2000-01-01', null, true);

INSERT INTO INNOUT.users (name, password, email, start_date, end_date, is_admin)
VALUES ('Chaves', '$2y$10$/vC1UKrEJQUZLN2iM3U9re/4DQP74sXCOVXlYXe/j9zuv1/MHD4o.', 'chaves@cod3r.com.br', '2000-01-01', null, true);

INSERT INTO INNOUT.users (name, password, email, start_date, end_date, is_admin)
VALUES ('Seu Barriga', '$2y$10$/vC1UKrEJQUZLN2iM3U9re/4DQP74sXCOVXlYXe/j9zuv1/MHD4o.', 'barriga@cod3r.com.br', '2000-01-01', null, false);

INSERT INTO INNOUT.users (name, password, email, start_date, end_date, is_admin)
VALUES ('Seu Madruga', '$2y$10$/vC1UKrEJQUZLN2iM3U9re/4DQP74sXCOVXlYXe/j9zuv1/MHD4o.', 'madruga@cod3r.com.br', '2000-01-01', null, false);

INSERT INTO INNOUT.users (name, password, email, start_date, end_date, is_admin)
VALUES ('Quico', '$2y$10$/vC1UKrEJQUZLN2iM3U9re/4DQP74sXCOVXlYXe/j9zuv1/MHD4o.', 'quico@cod3r.com.br', '2000-01-01', '2019-01-01', false);
