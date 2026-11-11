
/* ==== __break @ 0043bfef ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bfef-0043bfef
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


