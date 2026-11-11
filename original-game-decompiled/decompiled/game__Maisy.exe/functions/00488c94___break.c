
/* ==== __break @ 00488c94 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00488c94-00488c94
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


