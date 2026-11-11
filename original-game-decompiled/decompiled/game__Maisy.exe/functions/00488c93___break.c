
/* ==== __break @ 00488c93 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00488c93-00488c93
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


