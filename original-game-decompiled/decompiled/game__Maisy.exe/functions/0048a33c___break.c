
/* ==== __break @ 0048a33c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048a33c-0048a33c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


