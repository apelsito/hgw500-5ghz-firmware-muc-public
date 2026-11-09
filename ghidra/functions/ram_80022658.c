/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:80022658 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_80022658(undefined4 param_1,int param_2,int param_3,uint *param_4,byte *param_5,int param_6)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar8 = *(int *)(param_3 + 0x20);
  puVar5 = (ushort *)(param_2 + 0x7e0 + (param_4[3] & 0xf) * 0x4c);
  if (((*param_5 & 0x80) == 0) || ((char)puVar5[0x20] != '\x01')) {
    return 1;
  }
  uVar6 = (uint)param_5[0x17] << 4 | (int)(uint)param_5[0x16] >> 4;
  uVar3 = (0x1000 - (uint)*puVar5) + uVar6;
  uVar4 = (uint)puVar5[1];
  uVar7 = uVar3 & 0xfff;
  if (((param_5[1] & 8) != 0) || (bVar1 = false, (int)(0x1000 - uVar4) <= (int)uVar7)) {
    bVar1 = true;
  }
  *(uint *)(iVar8 + 0x88) = param_6 << 0x10 | (uint)*(byte *)(param_2 + 0x67c) << 2 | 1;
  if ((((*param_4 & 4) != 0) && ((param_4[5] & 0x70000) == 0x40000)) && ((*param_4 & 0x80) != 0)) {
    *(uint *)(iVar8 + 0x88) = *(uint *)(iVar8 + 0x88) | 2;
  }
  if (uVar7 < uVar4) {
    *(undefined1 *)(puVar5 + 10) = 0;
    iVar2 = FUN_ram_80022150(param_1,param_2,puVar5,iVar8,uVar3 & 0xfff);
    if (iVar2 != 0) goto LAB_ram_8002287c;
  }
  else {
    if (uVar4 * 2 < uVar7) {
      if (bVar1) {
        DAT_ram_80037074 = DAT_ram_80037074 + 1;
      }
      else {
        *(char *)(puVar5 + 10) = (char)puVar5[10] + '\x01';
        DAT_ram_80037078 = DAT_ram_80037078 + 1;
        if (3 < (byte)puVar5[10]) {
          *(undefined1 *)(puVar5 + 10) = 0;
          FUN_ram_800221cc(param_1,puVar5,uVar6,uVar7);
          FUN_ram_80022150(param_1,param_2,puVar5,iVar8,uVar3 & 0xfff);
          puVar5[6] = *puVar5 & puVar5[1] - 1;
          DAT_ram_8003708c = DAT_ram_8003708c + 1;
          goto LAB_ram_80022850;
        }
      }
LAB_ram_8002287c:
      uVar4 = *(uint *)(iVar8 + 0x84);
      FUN_ram_80025588(uVar4,0x43a0);
      uVar3 = STATUS32;
      if ((uVar3 & 2) != 0) {
        STATUS32 = uVar3 & 0xfffffffd;
      }
      if ((_DAT_ram_e1020114 & 0x80000000) == 0) {
        iVar2 = 0;
        bVar1 = false;
        do {
          iVar9 = 0;
          do {
            sync();
            iVar9 = iVar9 + 1;
          } while (iVar9 < 10);
          if ((!bVar1) && (iVar2 = iVar2 + 1, iVar2 == 0x3e9)) {
            FUN_ram_000ee260(s_MuC___s_ram_001c19a4,s___topaz_hbm_wait_timeout_ram_001c1cd0);
            bVar1 = true;
          }
        } while ((_DAT_ram_e1020114 & 0x80000000) == 0);
      }
      sync();
      _DAT_ram_e1020114 = 5;
      sync();
      STATUS32 = uVar3;
      _DAT_ram_e1020144 = (uVar4 - (uVar4 & 0x3ff)) + 0x40;
      *(undefined4 *)(iVar8 + 0x84) = 0;
      *(undefined4 *)(iVar8 + 0x98) = 0;
      *(int *)(iVar8 + 0x8c) = DAT_ram_8002c96c;
      DAT_ram_8002c96c = iVar8;
      DAT_ram_8002c974 = DAT_ram_8002c974 + 1;
      DAT_ram_80037014 = DAT_ram_80037014 + 1;
      return 0;
    }
    *(undefined1 *)(puVar5 + 10) = 0;
    FUN_ram_800221cc(param_1,puVar5,uVar6,uVar7);
    FUN_ram_80022150(param_1,param_2,puVar5,iVar8,uVar3 & 0xfff);
    puVar5[6] = puVar5[1] - 1 & *puVar5;
  }
LAB_ram_80022850:
  FUN_ram_800223a0(param_1,puVar5,param_2);
  FUN_ram_800213a0(*(undefined4 *)(puVar5 + 8));
  DAT_ram_800370c0 = uVar6;
  FUN_ram_80022588(param_2,param_5,param_6);
  return 0;
}


