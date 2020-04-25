--------------------------------------------------------
--  Fichier cr�� - mercredi-avril-01-2020   
--------------------------------------------------------
--------------------------------------------------------
--  DDL for Table ASSURANCES
--------------------------------------------------------

  CREATE TABLE "AMINE"."ASSURANCES" 
   (	"ID" NUMBER, 
	"MATRICULE" VARCHAR2(20 BYTE), 
	"N_POLICE" NUMBER, 
	"TYPE" VARCHAR2(20 BYTE), 
	"DATE_DEB" DATE, 
	"DATE_FIN" DATE, 
	"PRIX" NUMBER
   ) SEGMENT CREATION IMMEDIATE 
  PCTFREE 10 PCTUSED 40 INITRANS 1 MAXTRANS 255 NOCOMPRESS LOGGING
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
REM INSERTING into AMINE.ASSURANCES
SET DEFINE OFF;
--------------------------------------------------------
--  DDL for Index ASSURANCES_PK
--------------------------------------------------------

  CREATE UNIQUE INDEX "AMINE"."ASSURANCES_PK" ON "MOLKA"."ASSURANCES" ("ID") 
  PCTFREE 10 INITRANS 2 MAXTRANS 255 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM" ;
--------------------------------------------------------
--  Constraints for Table ASSURANCES
--------------------------------------------------------

  ALTER TABLE "AMINE"."ASSURANCES" ADD CONSTRAINT "ASSURANCES_PK" PRIMARY KEY ("ID")
  USING INDEX PCTFREE 10 INITRANS 2 MAXTRANS 255 
  STORAGE(INITIAL 65536 NEXT 1048576 MINEXTENTS 1 MAXEXTENTS 2147483645
  PCTINCREASE 0 FREELISTS 1 FREELIST GROUPS 1 BUFFER_POOL DEFAULT FLASH_CACHE DEFAULT CELL_FLASH_CACHE DEFAULT)
  TABLESPACE "SYSTEM"  ENABLE;
  ALTER TABLE "AMINE"."ASSURANCES" MODIFY ("ID" NOT NULL ENABLE);