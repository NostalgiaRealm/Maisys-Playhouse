
/* ==== __break @ 0048119c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048119c-0048119c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


