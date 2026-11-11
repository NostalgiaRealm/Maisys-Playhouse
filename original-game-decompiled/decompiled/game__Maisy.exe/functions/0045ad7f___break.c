
/* ==== __break @ 0045ad7f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045ad7f-0045ad7f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


