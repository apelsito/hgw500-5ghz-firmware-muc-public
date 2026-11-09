/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00134e48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_00134e48(undefined4 param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  undefined4 local_34;
  undefined2 local_30;
  
  local_34 = DAT_ram_001a6684;
  uVar2 = 0;
  iVar3 = 0x80;
  local_30 = DAT_ram_001a6688;
  puVar4 = (ushort *)(param_2 + 0x1bc);
  do {
    uVar1 = *puVar4;
    *(uint *)(uVar2 * 4 + -0x1af6fe00) = uVar1 | 0xffff0000;
    *(uint *)(uVar2 * 4 + -0x1af70000) = ~(uint)uVar1 | 0xffff0000;
    uVar5 = 0;
    do {
      _DAT_ram_e5090470 =
           *(undefined4 *)
            (param_2 + 700 + uVar2 * 0x40 + (uint)*(byte *)((int)&local_34 + uVar5) * 4);
      _DAT_ram_e509046c = (*(byte *)((int)&local_34 + uVar5) & 0xf) << 8 | uVar2 & 0x7f | 0x80000000
      ;
      sync();
      uVar5 = uVar5 + 1 & 0xff;
    } while (uVar5 < 6);
    iVar3 = iVar3 + -1;
    uVar2 = uVar2 + 1 & 0xff;
    puVar4 = puVar4 + 1;
  } while (iVar3 != 0);
  _DAT_ram_e5090460 = *(undefined4 *)(param_2 + 0x1b0);
  _DAT_ram_e509049c = *(undefined4 *)(param_2 + 0x1ac);
  return _DAT_ram_e509046c;
}


