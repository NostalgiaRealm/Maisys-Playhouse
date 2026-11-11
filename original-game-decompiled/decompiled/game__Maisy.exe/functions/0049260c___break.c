
/* ==== __break @ 0049260c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049260c-0049260c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


