
/* ==== __break @ 0044a95c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044a95c-0044a95c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


