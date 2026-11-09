/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00188fc0 */

void FUN_ram_00188fc0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 auStack_184 [18];
  undefined4 auStack_13c [18];
  undefined4 auStack_f4 [18];
  undefined4 auStack_ac [18];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  thunk_FUN_ram_0039fe00(auStack_184,&DAT_ram_001abae4,0x48);
  thunk_FUN_ram_0039fe00(auStack_13c,&DAT_ram_001abb2c,0x48);
  puVar2 = auStack_f4;
  thunk_FUN_ram_0039fe00(puVar2,&DAT_ram_001abb74,0x48);
  thunk_FUN_ram_0039fe00(auStack_ac,&DAT_ram_001abbbc,0x48);
  thunk_FUN_ram_0039fe00(&uStack_64,&DAT_ram_001abc04,0x48);
  if ((param_1 != 0x50) ||
     ((puVar1 = auStack_184, param_2 != 2 && (puVar1 = auStack_184, param_2 != 3)))) {
    puVar1 = auStack_13c;
  }
  uRame60920d4 = *puVar1;
  uRame60920d8 = puVar1[1];
  uRame60920dc = puVar1[2];
  uRame60920e0 = puVar1[3];
  uRame60920e4 = puVar1[4];
  uRame60920e8 = puVar1[5];
  uRame60920ec = puVar1[6];
  uRame60920f0 = puVar1[7];
  uRame60920f4 = puVar1[8];
  uRame60920f8 = puVar1[9];
  uRame609226c = puVar1[10];
  uRame6092270 = puVar1[0xb];
  uRame6092274 = puVar1[0xc];
  uRame6092278 = puVar1[0xd];
  uRame609227c = puVar1[0xe];
  uRame6092280 = puVar1[0xf];
  uRame6092284 = puVar1[0x10];
  uRame6092288 = puVar1[0x11];
  if (param_1 != 0x50) {
    puVar2 = auStack_ac;
  }
  uRame6092364 = *puVar2;
  uRame6092368 = puVar2[1];
  uRame609236c = puVar2[2];
  uRame6092370 = puVar2[3];
  uRame6092374 = puVar2[4];
  uRame6092378 = puVar2[5];
  uRame609237c = puVar2[6];
  uRame6092380 = puVar2[7];
  uRame6092384 = puVar2[8];
  uRame6092388 = puVar2[9];
  uRame609238c = puVar2[10];
  uRame6092390 = puVar2[0xb];
  uRame6092394 = puVar2[0xc];
  uRame6092398 = puVar2[0xd];
  uRame609239c = puVar2[0xe];
  uRame60923a0 = puVar2[0xf];
  uRame60923a4 = puVar2[0x10];
  uRame60923a8 = puVar2[0x11];
  uRame60923ac = DAT_ram_0019d5f4;
  uRame60923b0 = DAT_ram_0019d5f8;
  uRame60923b4 = DAT_ram_0019d5fc;
  uRame60923b8 = DAT_ram_0019d600;
  uRame60923bc = DAT_ram_0019d604;
  uRame60923c0 = DAT_ram_0019d608;
  uRame60923c4 = DAT_ram_0019d60c;
  uRame60923c8 = DAT_ram_0019d610;
  uRame60923cc = DAT_ram_0019d614;
  uRame60923d0 = DAT_ram_0019d618;
  uRame60923d4 = DAT_ram_0019d61c;
  uRame60923d8 = DAT_ram_0019d620;
  uRame60923dc = DAT_ram_0019d624;
  uRame60923e0 = DAT_ram_0019d628;
  uRame60923e4 = DAT_ram_0019d62c;
  uRame60923e8 = DAT_ram_0019d630;
  uRame60923ec = DAT_ram_0019d634;
  uRame60923f0 = DAT_ram_0019d638;
  uRame609231c = uStack_64;
  uRame6092320 = uStack_60;
  uRame6092324 = uStack_5c;
  uRame6092328 = uStack_58;
  uRame609232c = uStack_54;
  uRame6092330 = uStack_50;
  uRame6092334 = uStack_4c;
  uRame6092338 = uStack_48;
  uRame609233c = uStack_44;
  uRame6092340 = uStack_40;
  uRame6092344 = uStack_3c;
  uRame6092348 = uStack_38;
  uRame609234c = uStack_34;
  uRame6092350 = uStack_30;
  uRame6092354 = uStack_2c;
  uRame6092358 = uStack_28;
  uRame609235c = uStack_24;
  uRame6092360 = uStack_20;
  return;
}


