
/* ==== __break @ 0043bd48 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bd48-0043bd48
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


