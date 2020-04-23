--------------------------------------------------------
--  Fichier créé - mardi-avril-07-2020   
--------------------------------------------------------
--------------------------------------------------------
--  DDL for Table VOITURES
--------------------------------------------------------

  CREATE TABLE "AMINE"."VOITURES" 
   (	"MATRICULE" VARCHAR2(20 BYTE), 
	"MARQUE" VARCHAR2(20 BYTE), 
	"MODELE" VARCHAR2(20 BYTE)
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
REM INSERTING into AMINE.VOITURES
SET DEFINE OFF;
Insert into AMINE.VOITURES (MATRICULE,MARQUE,MODELE) values ('127TU1234','mercedes','c180');
