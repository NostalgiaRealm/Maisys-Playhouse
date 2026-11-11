
/* ==== __break @ 0049aedf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049aedf-0049aedf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


