
/* ==== __break @ 00488f9e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00488f9e-00488f9e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


