/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0015b358 */

void FUN_ram_0015b358(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  uVar10 = *(uint *)(param_1 + 0x467c);
  uVar7 = DAT_ram_0018cd50 - DAT_ram_8002ca18;
  uVar8 = DAT_ram_0018cd54 - DAT_ram_8002ca1c;
  uVar11 = DAT_ram_0018cd58 - DAT_ram_8002ca20;
  iVar6 = DAT_ram_0018cd60 - DAT_ram_8002ca28;
  iVar9 = DAT_ram_0018cd64 - DAT_ram_8002ca2c;
  uVar4 = 0;
  if ((DAT_ram_8002c91c & 2) != 0) {
    FUN_ram_000ee260(s_AutoCCA__Original__cca_try____d__ram_001c7970);
    uVar4 = DAT_ram_8002c91c & 2;
  }
  uVar2 = uVar7;
  if ((0x27 < uVar10) && (uVar7 <= uVar8)) {
    uVar2 = uVar8;
  }
  uVar3 = (uint)(DAT_ram_0018c1c4 - DAT_ram_8002ca68) / 0xfa;
  if (uVar3 < uVar2) {
    uVar5 = uVar2 - uVar3;
    DAT_ram_8002ca60 = 0;
    if (uVar10 < 0x50) goto LAB_ram_0015b478;
  }
  else {
    DAT_ram_8002ca60 = 0;
    if (uVar10 < 0x50) {
      uVar5 = 0;
      goto LAB_ram_0015b478;
    }
    uVar5 = 0;
  }
  DAT_ram_8002ca60 = 0;
  if (uVar3 < uVar11) {
    DAT_ram_8002ca60 = uVar11 - uVar3 >> 2;
  }
LAB_ram_0015b478:
  uVar1 = iVar9 - iVar6;
  DAT_ram_8002ca54 = uVar1 >> 2;
  DAT_ram_8002ca58 = (uint)(DAT_ram_0018c1c4 - DAT_ram_8002ca68) / 1000;
  DAT_ram_8002ca5c = uVar5 >> 2;
  if (uVar4 != 0) {
    FUN_ram_000ee260(s_AutoCCA__BW__d___ccaTry__d___smp_ram_001c79c0,uVar10,iVar9,iVar6,uVar2,uVar7,
                     uVar8,uVar11,uVar5,uVar1,uVar3);
  }
  DAT_ram_8002ca18 = DAT_ram_0018cd50;
  DAT_ram_8002ca1c = DAT_ram_0018cd54;
  DAT_ram_8002ca20 = DAT_ram_0018cd58;
  DAT_ram_8002ca24 = DAT_ram_0018cd5c;
  DAT_ram_8002ca28 = DAT_ram_0018cd60;
  DAT_ram_8002ca2c = DAT_ram_0018cd64;
  DAT_ram_8002ca30 = DAT_ram_0018cd68;
  DAT_ram_8002ca34 = DAT_ram_0018cd6c;
  DAT_ram_8002ca38 = DAT_ram_0018cd70;
  DAT_ram_8002ca3c = DAT_ram_0018cd74;
  DAT_ram_8002ca40 = DAT_ram_0018cd78;
  DAT_ram_8002ca44 = DAT_ram_0018cd7c;
  DAT_ram_8002ca48 = DAT_ram_0018cd80;
  DAT_ram_8002ca4c = DAT_ram_0018cd84;
  DAT_ram_8002ca68 = DAT_ram_0018c1c4;
  DAT_ram_8002ca50 = DAT_ram_0018cd88;
  return;
}


