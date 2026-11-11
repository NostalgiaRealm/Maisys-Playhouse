
/* ==== __break @ 00479bbf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00479bbf-00479bbf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


