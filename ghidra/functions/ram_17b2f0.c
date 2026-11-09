/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0017b2f0 */

void FUN_ram_0017b2f0(void)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar4 = DAT_ram_0018c2f0 * 0x1c;
  puVar5 = (undefined4 *)(&DAT_ram_00214380 + iVar4);
  DAT_ram_0018c35c = 0xff;
  if (DAT_ram_00210474 == '\0') {
    cVar1 = (&DAT_ram_00214398)[iVar4];
    if (cVar1 == '\x04') {
      FUN_ram_000f7d60(*(undefined4 *)(&DAT_ram_00214384 + iVar4));
      FUN_ram_0017a240((int)DAT_ram_002105f8);
      cVar1 = (&DAT_ram_00214398)[iVar4];
    }
    if (cVar1 != '\x05') {
      (&DAT_ram_00214398)[iVar4] = 3;
      return;
    }
    FUN_ram_000f7d60(*puVar5);
    puVar5 = &DAT_ram_00214290;
    iVar6 = 4;
    do {
      FUN_ram_0017b124(puVar5,(int)*(short *)(puVar5 + 8));
      FUN_ram_0017b260(puVar5,(int)*(short *)((int)puVar5 + 0x22));
      iVar6 = iVar6 + -1;
      puVar5 = puVar5 + 0xf;
    } while (iVar6 != 0);
    (&DAT_ram_00214398)[iVar4] = 3;
    return;
  }
  if (DAT_ram_00210474 == '\x01') {
    if ((&DAT_ram_00214398)[iVar4] == '\x03') {
      FUN_ram_0017a240((int)DAT_ram_002105f8);
    }
    else {
      if ((&DAT_ram_00214398)[iVar4] != '\x05') {
        pcVar3 = s_Temperature_based_compensation_w_ram_001ca224;
        goto LAB_ram_0017b4e4;
      }
      FUN_ram_000f7d60(*puVar5);
      puVar5 = &DAT_ram_00214290;
      iVar6 = 4;
      do {
        FUN_ram_0017b124(puVar5,(int)*(short *)(puVar5 + 8));
        FUN_ram_0017b260(puVar5,(int)*(short *)((int)puVar5 + 0x22));
        iVar6 = iVar6 + -1;
        puVar5 = puVar5 + 0xf;
      } while (iVar6 != 0);
      FUN_ram_0016afa4();
    }
    uVar2 = FUN_ram_000f7c10(5000,0,0,&LAB_ram_0017fc44,3);
    *(undefined4 *)(&DAT_ram_00214384 + iVar4) = uVar2;
    (&DAT_ram_00214398)[iVar4] = 4;
    return;
  }
  if (DAT_ram_00210474 != '\x02') {
    pcVar3 = s_Wrong_option__ram_001ca290;
LAB_ram_0017b4e4:
    FUN_ram_000ee260(pcVar3);
    return;
  }
  if ((&DAT_ram_00214398)[iVar4] == '\x03') {
    FUN_ram_0016afbc();
    uVar2 = FUN_ram_000f7c10(0xfa,0,0,&LAB_ram_0017fd2c,3);
    *puVar5 = uVar2;
  }
  else {
    if ((&DAT_ram_00214398)[iVar4] != '\x04') {
      pcVar3 = s_Power_detector_based_compensatio_ram_001ca258;
      goto LAB_ram_0017b4e4;
    }
    FUN_ram_000f7d60(*(undefined4 *)(&DAT_ram_00214384 + iVar4));
    FUN_ram_0016afbc();
    uVar2 = FUN_ram_000f7c10(0xfa,0,0,&LAB_ram_0017fd2c,3);
    *(undefined4 *)(&DAT_ram_00214384 + iVar4) = uVar2;
  }
  (&DAT_ram_00214398)[iVar4] = 5;
  return;
}


