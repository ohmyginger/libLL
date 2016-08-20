/*
	Copyright 2016 Nathan Cowart

	    This file is part of LibLL

	    LibLL is free software: you can redistribute it and/or modify
    it under the terms of the Affero GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

      LibLL is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Affero General Public License for more details.

    You should have received a copy of the GNU Affero General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef __LLIST_H__
#define __LLIST_H__

typedef struct node_short
{
	short val;
	node_short *next;
}node_short;

typedef struct node_int
{
	int val;
	node_int *next;
}node_int;

typedef struct node_long
{
	long val;
	node_long *next;
}node_long;

typedef struct node_float
{
	float val;
	node_float *next;
}node_float;

typedef struct node_double
{
	double val;
	node_double *next;
}node_double;

typedef struct node_char
{
	char val;
	node_char *next;
}node_char;

typedef struct node_str
{
	int length;
	char *val;
	node_str *next;
}node_str;

typedef struct node_void
{
	size_t length
	void *val;
	node_void *next;
}node_void;

node_short *append_new_node(node_short *head);
node_int *append_new_node(node_int *head);
node_long *append_new_node(node_long *head);
node_float *append_new_node(node_float *head);
node_double *append_new_node(node_double *head);
node_char *append_new_node(node_char *head);
node_str *append_new_node(node_str *head);
node_str *append_new_node(node_str *head, char *val);
node_str *append_new_node(node_str *head, char *val, int length);
node_void *append_new_node(node_void *head);
node_void *append_new_node(node_void *head, void *val, int length);
