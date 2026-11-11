
/* ==== __break @ 0043bf42 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bf42-0043bf42
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


