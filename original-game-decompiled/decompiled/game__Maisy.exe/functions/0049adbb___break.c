
/* ==== __break @ 0049adbb ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049adbb-0049adbb
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


