-- --------------------------------------------------------
-- Host:                         127.0.0.1
-- Server version:               5.5.16 - MySQL Community Server (GPL)
-- Server OS:                    Win32
-- HeidiSQL version:             7.0.0.4053
-- Date/time:                    2012-11-19 17:15:24
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!40014 SET FOREIGN_KEY_CHECKS=0 */;

-- Dumping structure for table game.ds_repops
DROP TABLE IF EXISTS `custom_repops`;
CREATE TABLE IF NOT EXISTS `custom_repops` (
  `mapID` tinyint(4) NOT NULL,
  `Active` tinyint(4) NOT NULL DEFAULT '1',
  UNIQUE KEY `MapID` (`mapID`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1 COMMENT='Upon Death, check if player is in one of these (maps/areas/zones) IDs.\r\nIf true, check if that (map/zone/area) IDs are active.\r\nRepop player at the same location, instead of graveyard port.\r\nActive Type: 1(true), 0(false).';

-- Dumping data for table game.ds_repops: ~1 rows (approximately)
/*!40000 ALTER TABLE `ds_repops` DISABLE KEYS */;
INSERT INTO `ds_repops` (`mapID`, `Active`) VALUES
	(1, 1);
/*!40000 ALTER TABLE `ds_repops` ENABLE KEYS */;
/*!40014 SET FOREIGN_KEY_CHECKS=1 */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
