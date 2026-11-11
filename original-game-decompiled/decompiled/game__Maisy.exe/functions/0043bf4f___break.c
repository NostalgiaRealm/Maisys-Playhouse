
/* ==== __break @ 0043bf4f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043bf4f-0043bf4f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


