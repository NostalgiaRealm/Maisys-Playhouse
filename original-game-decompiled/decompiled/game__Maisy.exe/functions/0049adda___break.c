
/* ==== __break @ 0049adda ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adda-0049adda
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


