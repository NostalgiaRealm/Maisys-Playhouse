
/* ==== __break @ 0049adfb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adfb-0049adfb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


