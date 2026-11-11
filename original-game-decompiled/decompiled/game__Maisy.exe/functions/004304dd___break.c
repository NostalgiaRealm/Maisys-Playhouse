
/* ==== __break @ 004304dd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004304dd-004304dd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


