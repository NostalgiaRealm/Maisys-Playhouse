
/* ==== __break @ 0049bdfd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0049bdfd-0049bdfd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


