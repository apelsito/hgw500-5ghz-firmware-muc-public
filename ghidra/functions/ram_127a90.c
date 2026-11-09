/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00127a90 */

uint FUN_ram_00127a90(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int *piVar7;
  
  iVar5 = *(int *)(param_1 + 0x84);
  uVar4 = 0;
  if ((iVar5 != 0) && (bVar2 = *(byte *)(iVar5 + 0x1a), (bVar2 & 4) != 0)) {
    piVar7 = *(int **)(iVar5 + 0x1c);
    pcVar6 = *(char **)(iVar5 + 0x10);
    if (piVar7 == (int *)0x0) {
      *(byte *)(iVar5 + 0x1a) = bVar2 & 0xfb;
      *(undefined2 *)(iVar5 + 0x14) = 0;
    }
    else {
      iVar3 = *piVar7;
      if (iVar3 == 0) {
        *(byte *)(iVar5 + 0x1a) = bVar2 & 0xfb;
        *(undefined2 *)(iVar5 + 0x14) = 0;
      }
      else {
        while( true ) {
          FUN_ram_0039fe00(pcVar6,iVar3,piVar7[1]);
          cVar1 = *pcVar6;
          iVar3 = piVar7[1];
          uVar4 = uVar4 + iVar3;
          if ((cVar1 == '\x06') || (cVar1 == '\x05')) {
            *(char **)(param_1 + 0x90) = pcVar6;
          }
          else if (cVar1 == '%') {
            *(char **)(param_1 + 0xa0) = pcVar6;
          }
          else if (cVar1 == '#') {
            *(char **)(param_1 + 0xb4) = pcVar6;
          }
          else if (cVar1 == -0x23) {
            if (pcVar6[5] == '\x17') {
              *(char **)(param_1 + 0xc4) = pcVar6;
            }
          }
          else if (cVar1 == '\v') {
            *(char **)(param_1 + 200) = pcVar6;
          }
          if (0x2ff < uVar4) break;
          piVar7 = (int *)piVar7[2];
          pcVar6 = pcVar6 + iVar3;
          if ((piVar7 == (int *)0x0) || (iVar3 = *piVar7, iVar3 == 0)) goto LAB_ram_00127b78;
        }
        FUN_ram_000eaac4(0,s_>>>>_WARNING_at__s__d___s__val_0_ram_001c3ccc,
                         s_qtn_if_qtn_beacon_c_ram_001c3cf8,0x13f,
                         s__Pre_allocated_beacon_buffer_is_n_ram_001c3d0c);
        FUN_ram_000ec0ec();
        FUN_ram_000eaac4(0,s_<<<<_ram_001c3d50);
LAB_ram_00127b78:
        piVar7 = *(int **)(*(int *)(param_1 + 0x84) + 0x1c);
        *(byte *)(iVar5 + 0x1a) = *(byte *)(iVar5 + 0x1a) & 0xfb;
        *(short *)(iVar5 + 0x14) = (short)uVar4;
        if (piVar7 == (int *)0x0) {
          return uVar4;
        }
      }
      do {
        FUN_ram_000ee834(*piVar7);
        piVar7[1] = 0;
        *piVar7 = 0;
        piVar7 = (int *)piVar7[2];
      } while (piVar7 != (int *)0x0);
    }
  }
  return uVar4;
}


