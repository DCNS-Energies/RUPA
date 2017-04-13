CREATE TABLE IF NOT EXISTS Campaign (
    id INT UNSIGNED NOT NULL AUTO_INCREMENT,
    viewable BOOLEAN NOT NULL DEFAULT 1,
    geographical_area LONGTEXT,
    campaign_name TEXT,
    finished boolean NOT NULL DEFAULT 0,
    PRIMARY KEY (id)
    );

    
CREATE TABLE IF NOT EXISTS Structure (
    id INT UNSIGNED NOT NULL AUTO_INCREMENT,
    campaign INT UNSIGNED NOT NULL,
    viewable BOOLEAN NOT NULL DEFAULT 1,
    devices LONGTEXT,
    transponders INT,
    structure_depth DOUBLE,
    PRIMARY KEY (id),
    CONSTRAINT fk_campaign_id
	FOREIGN KEY (campaign)
	REFERENCES Campaign(id)
    );


CREATE TABLE IF NOT EXISTS Transponder (
    id INT UNSIGNED NOT NULL AUTO_INCREMENT,
    structure INT UNSIGNED NOT NULL,
    viewable BOOLEAN NOT NULL DEFAULT 1,
    serial_number TEXT,
    address INT NOT NULL DEFAULT 000,
    frequency INT NOT NULL DEFAULT 1,
    deployment_voltage DOUBLE,
    recovery_voltage DOUBLE,
    PRIMARY KEY (id),
    CONSTRAINT fk_structure_id
	FOREIGN KEY (structure)
	REFERENCES Structure(id)
    );


CREATE TABLE IF NOT EXISTS Operation (
    id INT UNSIGNED NOT NULL AUTO_INCREMENT,
    structure INT UNSIGNED NOT NULL,
    viewable BOOLEAN NOT NULL DEFAULT 1,
    deployment_or_recovery CHAR(1) DEFAULT 'D',
    latitude TEXT,
    longitude TEXT,
    operation_date DATETIME,
    approximation DOUBLE,
    PRIMARY KEY (id),
    CONSTRAINT fk_structure_id
	FOREIGN KEY (structure)
	REFERENCES Structure(id)
    );


CREATE TABLE IF NOT EXISTS Burst (
    id INT UNSIGNED NOT NULL AUTO_INCREMENT,
    operation INT UNSIGNED NOT NULL,
    viewable BOOLEAN NOT NULL DEFAULT 1,
    burst_mode CHAR(1) DEFAULT 'M', -- M = Manual, S = Semi auto, A = Auto
    pings_emmited_count INT UNSIGNEd DEFAULT 0,
    pings_received_count INT UNSIGNED DEFAULT 0,
    PRIMARY KEY (id),
    CONSTRAINT fk_operation_id
	FOREIGN KEY (operation)
	REFERENCES Operation(id)
    );


CREATE TABLE IF NOT EXISTS Measurement (
    id INT UNSIGNED NOT NULL AUTO_INCREMENT,
    burst INT UNSIGNED NOT NULL,
    viewable BOOLEAN NOT NULL DEFAULT 1,
    latitude TEXT,
    longitude TEXT,
    id_transponder INT UNSIGNED NOT NULL DEFAULT 0,
    message TEXT,
    rs232_command TEXT,
    emission_date DATETIME,
    receipt_date DATETIME,
    value TEXT,
    PRIMARY KEY (id),
    CONSTRAINT fk_burst_id
	FOREIGN KEY (burst)
	REFERENCES Burst(id)
    );


