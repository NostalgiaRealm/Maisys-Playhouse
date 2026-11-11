
/* ==== __break @ 0049515b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049515b-0049515b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


