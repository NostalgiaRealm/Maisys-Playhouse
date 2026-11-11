
/* ==== __break @ 004316ce ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004316ce-004316ce
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


