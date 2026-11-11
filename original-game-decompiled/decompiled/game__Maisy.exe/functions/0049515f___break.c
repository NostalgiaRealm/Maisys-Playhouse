
/* ==== __break @ 0049515f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049515f-0049515f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


