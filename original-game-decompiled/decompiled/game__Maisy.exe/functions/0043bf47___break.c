
/* ==== __break @ 0043bf47 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bf47-0043bf47
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


