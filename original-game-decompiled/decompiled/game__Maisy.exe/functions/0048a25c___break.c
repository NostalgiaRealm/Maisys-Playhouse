
/* ==== __break @ 0048a25c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048a25c-0048a25c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


