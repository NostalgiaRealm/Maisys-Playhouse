
/* ==== __break @ 0043bf48 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bf48-0043bf48
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


