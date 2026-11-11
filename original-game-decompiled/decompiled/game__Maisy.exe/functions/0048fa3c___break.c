
/* ==== __break @ 0048fa3c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048fa3c-0048fa3c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


