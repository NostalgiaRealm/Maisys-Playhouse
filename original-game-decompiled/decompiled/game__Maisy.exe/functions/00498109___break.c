
/* ==== __break @ 00498109 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00498109-00498109
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


