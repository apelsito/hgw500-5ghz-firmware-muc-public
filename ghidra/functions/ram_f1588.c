/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f1588 */

/* WARNING: Removing unreachable block (ram,0x000f16d8) */
/* WARNING: Removing unreachable block (ram,0x000f16f8) */
/* WARNING: Removing unreachable block (ram,0x000f16e0) */
/* WARNING: Removing unreachable block (ram,0x000f16e8) */
/* WARNING: Removing unreachable block (ram,0x000f1700) */

undefined1 FUN_ram_000f1588(int param_1,undefined4 *param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_r7;
  int extraout_r8;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int iVar10;
  
  puVar8 = (undefined1 *)((int)param_2 + 0x5b);
  *param_2 = *(undefined4 *)(param_1 + 0x2c);
  FUN_ram_0039fe00((int)param_2 + 0x25,param_1 + 4,0x10);
  FUN_ram_0039fe00((int)param_2 + 0x55,param_1 + 0x24,6);
  iVar10 = 0x82;
  LP_START = 0xf15ec;
  LP_END = 0xf15f0;
  puVar9 = puVar8;
  do {
    *puVar9 = 0xff;
    iVar10 = iVar10 + -1;
    puVar9 = puVar9 + 1;
  } while (iVar10 != 0);
  bVar3 = false;
  iVar7 = *(int *)(param_1 + 0x30);
  iVar10 = extraout_r7;
  iVar6 = extraout_r8;
  iVar5 = 0;
  if (iVar7 < 1) goto LAB_ram_000f161c;
  iVar10 = *(int *)(param_1 + 0x44) + 1;
  iVar6 = 0;
  LP_START = 0xf160c;
  LP_END = 0xf161c;
  bVar3 = true;
  puVar9 = puVar8;
  do {
    iVar5 = iVar6 * 0x20;
    iVar6 = iVar6 + 1;
    puVar8 = puVar9 + 1;
    *puVar9 = *(undefined1 *)(iVar10 + iVar5);
    iVar5 = iVar7;
LAB_ram_000f161c:
  } while ((bVar3) && (iVar7 = iVar5 + -1, puVar9 = puVar8, iVar7 != 0));
  bVar1 = *(byte *)(param_1 + 0x49);
  param_2[1] = (uint)*(byte *)(param_1 + 0x34) | (*(byte *)(param_1 + 0x35) & 0xf) << 8;
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  param_2[2] = (uint)*(byte *)(param_1 + 0x48) | (bVar1 & 0xf) << 8;
  bVar1 = *(byte *)(param_1 + 0x3c);
  param_2[3] = uVar4;
  uVar4 = *(undefined4 *)(param_1 + 0x40);
  param_2[4] = (uint)*(byte *)(param_1 + 0x3d) | (bVar1 & 0xf) << 8;
  param_2[5] = uVar4;
  FUN_ram_0039fe00((int)param_2 + 0x35,&DAT_ram_001bdff0,0xf);
  *(undefined1 *)(param_2 + 0x11) = 0;
  uVar4 = FUN_ram_0017fcd0();
  FUN_ram_0039fe00((int)param_2 + 0x45,uVar4,0xf);
  *(undefined1 *)(param_2 + 0x15) = 0;
  uVar4 = FUN_ram_000f1ffc();
  param_2[6] = uVar4;
  uVar2 = *(ushort *)(param_1 + 0xe);
  param_2[7] = 0x8003b408;
  param_2[8] = 0;
  if ((uVar2 & 0x40) != 0) {
    iVar10 = *(int *)(*(int *)(param_1 + 0x1c) + 0x38);
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0x10);
    if (iVar10 != 0) {
      param_2[8] = (uint)*(byte *)(iVar10 + 0x67c);
    }
  }
  return *(undefined1 *)(param_1 + 0x30);
}


