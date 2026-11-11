
/* ==== __break @ 0044896c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044896c-0044896c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


