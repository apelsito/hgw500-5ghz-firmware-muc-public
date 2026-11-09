/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:000f4f34 */

undefined4 FUN_ram_000f4f34(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1 = param_1 * 0x14;
  iVar1 = (*DAT_ram_001dc444)(param_2,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    (*DAT_ram_001dc44c)(iVar1,*(undefined4 *)(&DAT_ram_001dce70 + param_1),0x14);
    (*DAT_ram_001dc44c)(iVar1,*(undefined4 *)(&DAT_ram_001dce74 + param_1),
                        (uint)*(ushort *)(*(int *)(&DAT_ram_001dce70 + param_1) + 0xe) << 3);
    (*DAT_ram_001dc44c)(iVar1,**(undefined4 **)(&DAT_ram_001dce7c + param_1),
                        *(undefined4 *)(*(int *)(&DAT_ram_001dce70 + param_1) + 8));
    (*DAT_ram_001dc454)(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}


