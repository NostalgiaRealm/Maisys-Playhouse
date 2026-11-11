
/* ==== __break @ 0049cafc ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049cafc-0049cafc
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


