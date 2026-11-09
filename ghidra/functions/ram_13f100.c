/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0013f100 */

undefined4 FUN_ram_0013f100(int param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    uVar4 = (uint)*(byte *)(param_1 + 0x25);
    uVar5 = (uint)*(byte *)(param_1 + 0x24);
    if ((*(int *)(param_1 + 0x14) == 0) ||
       (iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x24e0), iVar3 == 0)) goto LAB_ram_0013f184;
LAB_ram_0013f160:
    if ((DAT_ram_8002c8e4 == 0) ||
       (DAT_ram_8002c8e4 != (*(ushort *)(iVar3 + 0x18) & 0xffff3fff) && DAT_ram_8002c8e4 != 0xfe))
    goto LAB_ram_0013f184;
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + 0x29);
    uVar5 = (uint)*(byte *)(param_1 + 0x28);
    if ((*(int *)(param_1 + 0x14) != 0) &&
       (iVar3 = *(int *)(*(int *)(param_1 + 0x14) + 0x24e0), iVar3 != 0)) goto LAB_ram_0013f160;
LAB_ram_0013f184:
    if ((*(int *)(param_1 + 0x18) == 0) ||
       (((iVar3 = *(int *)(*(int *)(param_1 + 0x18) + 0x24e0), iVar3 == 0 || (DAT_ram_8002c8e4 == 0)
         ) || ((*(ushort *)(iVar3 + 0x18) & 0xffff3fff) != DAT_ram_8002c8e4 &&
               DAT_ram_8002c8e4 != 0xfe)))) goto LAB_ram_0013f198;
  }
  if (param_3 == 0) {
    FUN_ram_000ee260(s_ralg_mu__expmat_ss__s_pos0__d_po_ram_001c4f6c,&DAT_ram_001c4f94,uVar5,uVar4);
  }
  else {
    FUN_ram_000ee260(s_ralg_mu__expmat_ss__s_pos0__d_po_ram_001c4f6c,s_sample_ram_001c4f9c,uVar5,
                     uVar4);
  }
LAB_ram_0013f198:
  uVar1 = uVar5;
  if (uVar5 < 4) {
    uVar1 = uVar4;
  }
  if (((uVar1 < 4) && (*(char *)(param_1 + 1) == '\x01' || *(char *)(param_1 + 1) == '\x02')) &&
     (uVar4 = (uint)*(byte *)(uVar4 + uVar5 * 3 + 0x1a9224), uVar4 != 0xff)) {
    *param_2 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0x30 + uVar4 * 4);
  }
  else {
    uVar2 = 0;
    *param_2 = 0;
  }
  return uVar2;
}


