
/* ==== __break @ 0044a00c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a00c-0044a00c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


