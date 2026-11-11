
/* ==== __break @ 0045ad7c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0045ad7c-0045ad7c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


