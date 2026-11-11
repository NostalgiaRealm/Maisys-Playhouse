
/* ==== __break @ 00450d39 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00450d39-00450d39
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


