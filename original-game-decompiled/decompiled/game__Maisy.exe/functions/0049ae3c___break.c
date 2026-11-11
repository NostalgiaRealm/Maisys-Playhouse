
/* ==== __break @ 0049ae3c ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049ae3c-0049ae3c
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


