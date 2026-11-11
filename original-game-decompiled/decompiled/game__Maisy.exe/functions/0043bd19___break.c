
/* ==== __break @ 0043bd19 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd19-0043bd19
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


