
/* ==== __break @ 0045ad83 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045ad83-0045ad83
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


