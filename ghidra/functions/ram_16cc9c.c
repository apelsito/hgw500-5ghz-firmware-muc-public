/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0016cc9c */

/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_ram_0016cc9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined1 param_9)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_3c;
  
  iVar2 = DAT_ram_0018c334;
  if (DAT_ram_8002c8bc == '\x03') {
    return 0;
  }
  if (DAT_ram_0018c358 == 0) {
    DAT_ram_0021e00c = 0xafab;
    DAT_ram_0021e01c = DAT_ram_0018c334;
    DAT_ram_0021e010 = 0;
    DAT_ram_0021e020 = 0;
    DAT_ram_0021e024 = 0;
    DAT_ram_0021e028 = 0;
    DAT_ram_0021e014 = (undefined4 *)FUN_ram_0010914c(DAT_ram_0018c334,0,0x10);
    DAT_ram_0021e018 = (undefined4 *)FUN_ram_0010914c(iVar2,0,0x10);
    uVar3 = FUN_ram_000f9640(*(undefined4 *)(DAT_ram_0021e01c + 0x3b20),DAT_ram_0021e014 + 1,0x10);
    *DAT_ram_0021e014 = uVar3;
    uVar3 = FUN_ram_000f9640(*(undefined4 *)(DAT_ram_0021e01c + 0x3b20),DAT_ram_0021e018 + 1,0x10);
    *DAT_ram_0021e018 = uVar3;
  }
  if (DAT_ram_0018c328 == 0) {
    if (DAT_ram_0018c32f == '\x01') {
      DAT_ram_0018c354 = 0x5674;
      iVar6 = 0;
      iVar5 = 1000;
      do {
        iVar5 = iVar5 + -1;
        uStack_3c = FUN_ram_0016c73c();
        FUN_ram_0039fe00(&DAT_ram_00193bd8 + iVar6,&uStack_3c,4);
        iVar6 = iVar6 + 4;
      } while (iVar5 != 0);
    }
    else {
      FUN_ram_000eea80(&DAT_ram_00193bd8,0,4000);
    }
  }
  else {
    FUN_ram_0016c650(param_7,param_8);
  }
  FUN_ram_0016ca8c(DAT_ram_0021e014,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_9);
  FUN_ram_0016ca8c(DAT_ram_0021e018,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                   param_9);
  iVar6 = DAT_ram_0018c358;
  iVar5 = *(int *)(iVar2 + 0x3b20);
  puVar4 = (undefined4 *)(*(int *)(iVar5 + 0xc) + 0x2000);
  if (DAT_ram_0018c328 == 0) {
    *puVar4 = 0x21c3ff51;
    iVar5 = *(int *)(iVar5 + 0xc);
    *(uint *)(iVar5 + 0x2028) = *(uint *)(iVar5 + 0x2028) | 0x100;
  }
  else {
    *puVar4 = 0x2003ff41;
  }
  if (iVar6 != 0) {
    return 0;
  }
  DAT_ram_0018c358 = 1;
  uVar1 = STATUS32;
  if ((uVar1 & 2) != 0) {
    STATUS32 = uVar1 & 0xfffffffd;
  }
  uVar3 = FUN_ram_000f939c(*(undefined4 *)(iVar2 + 0x3b20),6,0,0);
  FUN_ram_000e83ec(uVar3,&LAB_ram_0016d2d4,0,0,&LAB_ram_0016d284,0);
  uVar3 = FUN_ram_000f939c(*(undefined4 *)(iVar2 + 0x3b20),7,0,0);
  FUN_ram_000e83ec(uVar3,&LAB_ram_0016d0d4,0,0,&LAB_ram_0016cfb8,0);
  STATUS32 = uVar1;
  return 1;
}


