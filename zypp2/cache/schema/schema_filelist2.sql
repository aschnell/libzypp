
DROP TABLE IF EXISTS files;
DROP TABLE IF EXISTS dir;

CREATE TABLE dir (
    id INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL
  , name TEXT UNIQUE
);

CREATE TABLE files (
     dir_id INTEGER NOT NULL REFERENCES dir(id)
  ,  package_id INTEGER NOT NULL
  , name TEXT UNIQUE
  , PRIMARY KEY (package_id, name)
);

